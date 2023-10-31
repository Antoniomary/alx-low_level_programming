#include "main.h"
#include <elf.h>
#include <stdint.h>

void print_info(const Elf64_Ehdr info);
void header_data(unsigned char data);
void header_type(unsigned int type);
void os_abi(unsigned char os);

/**
 * main - a program that displays the information contained in the
 * ELF header at the start of an ELF file.
 * @ac: argument count at command line.
 * @av: argument vector at command line.
 *
 * Return: 0 (success) else 98 (failure).
 */
int main(int ac, char **av)
{
	Elf64_Ehdr info;
	int fd, info_size, close_fd;
	char *elf_filename;

	if (ac != 2)
		return (dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), 98);

	elf_filename = av[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
		return (dprintf(STDERR_FILENO, "Error: Can't open %s\n", elf_filename), 98);

	info_size = read(fd, &info, sizeof(info));
	if (info_size == -1 || info_size != sizeof(info))
	{
		dprintf(STDERR_FILENO, "Error: Can't read ELF header\n");
		exit(98);
	}

	close_fd = close(fd);
	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}

	if (info.e_ident[0] != 0x7f && info.e_ident[1] != 'E'
			&& info.e_ident[2] != 'L' && info.e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file: ", elf_filename);
		exit(98);
	}

	print_info(info);

	return (0);
}

/**
 * print_info - a function that print information about an ELF file.
 * @info: information about the file to be printed.
 */
void print_info(const Elf64_Ehdr info)
{
	unsigned int i;
	unsigned long int x;
	char *s;

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (i = 0; i < 16; ++i)
		printf("%02x%c", info.e_ident[i], i != 15 ? ' ' : '\n');

	i = info.e_ident[EI_CLASS];
	s = i == ELFCLASSNONE ? "none" : i == ELFCLASS32 ? "ELF32" : "ELF64";
	printf("  %-35s%s\n", "Class:", s);

	header_data(info.e_ident[EI_DATA]);

	s = info.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "";
	printf("  %-35s%d%s\n", "Version:", info.e_ident[EI_VERSION], s);

	os_abi(info.e_ident[EI_OSABI]);

	printf("  %-35s%d\n", "ABI Version:", info.e_ident[EI_ABIVERSION]);

	i = info.e_type;
	if (info.e_ident[EI_DATA] == ELFDATA2MSB)
		i >>= 8;
	header_type(i);

	printf("  %-35s", "Entry point address:");
	x = info.e_entry;
	if (info.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		x = ((x << 8) & 0xFF00FF00) | ((x >> 8) & 0xFF00FF);
		x = (x << 16) | (x >> 16);
	}
	if (info.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int) x);
	else
		printf("%#lx\n", x);
}

/**
 * header_data - a funtion that determines and prints data encoding of the
 * processor-specific data in a file.
 * @data: the information to use to get the encoding.
 */
void header_data(unsigned char data)
{
	printf("  %-35s", "Data:");
	switch (data)
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", data);
	}
}

/**
 * header_type - a function that identifies object file type of char ELF file.
 * @type: the number to use to determine object file type.
 */
void header_type(unsigned int type)
{
	printf("  %-35s", "Type:");

	switch (type)
	{
		case ET_NONE:
			printf("NONE (none)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown %x>\n", type);
	}
}

/**
 * os_abi - a function that identifies the operating system and ABI to which
 * the object is targeted.
 * @os: used to determine the particular OS.
 */
void os_abi(unsigned char os)
{
	printf("  %-35s", "OS/ABI:");
	switch (os)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\b");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone\n");
			break;
		default:
			printf("<unknown: %x>\n", os);
	}
}
