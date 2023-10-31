#include "main.h"
#include <elf.h>
#include <stdint.h>

void print_info(const Elf64_Ehdr info);
char *header_type(unsigned char type);
char *os_abi(unsigned char os);

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
	int i, x;
	char *s;

	printf("ELF Header:\n");

	printf("  Magic:   ");
	for (i = 0; i < 16; ++i)
		printf("%02x%c", info.e_ident[i], i != 15 ? ' ' : '\n');

	x = info.e_ident[4] == ELFCLASS32 ? 32 : 64;
	printf("  %-35sELF%d\n", "Class:", x);
	s = info.e_ident[5] == ELFDATA2LSB ? "little" : "big";
	printf("  %-35s2's complement, %s endian\n", "Data:", s);
	printf("  %-35s%d (current)\n", "Version:", info.e_ident[EI_VERSION]);
	printf("  %-35s%s\n", "OS/ABI:", os_abi(info.e_ident[EI_OSABI]));
	printf("  %-35s%d\n", "ABI Version:", info.e_ident[EI_ABIVERSION]);
	printf("  %-35s%s\n", "Type:", header_type(info.e_type));
	printf("  %-35s%#x\n", "Entry point address:", (int) info.e_entry);
}

/**
 * header_type - a function that identifies object file type of char ELF file.
 * @type: the number to use to determine object file type.
 *
 * Return: a string pertaining details of the object file type.
 */
char *header_type(unsigned char type)
{
	switch (type)
	{
		case ET_REL:
			return ("REL (Relocatable file)");
		case ET_EXEC:
			return ("EXEC (Executable file)");
		case ET_DYN:
			return ("DYN (Shared object file)");
		case ET_CORE:
			return ("CORE (Core file)");
	}

	return ("Unknown file");
}

/**
 * os_abi - a function that identifies the operating system and ABI to which
 * the object is targeted.
 * @os: used to determine the particular OS.
 *
 * Return: a string pertaining the OSABI.
 */
char *os_abi(unsigned char os)
{
	switch (os)
	{
		case ELFOSABI_SYSV:
			return ("UNIX - System V");
		case ELFOSABI_HPUX:
			return ("UNIX - HP-UX");
		case ELFOSABI_NETBSD:
			return ("UNIX - NetBSD");
		case ELFOSABI_LINUX:
			return ("Linux");
		case ELFOSABI_SOLARIS:
			return ("UNIX - Solaris");
		case ELFOSABI_IRIX:
			return ("UNIX - IRIX");
		case ELFOSABI_FREEBSD:
			return ("UNIX - FreeBSD");
		case ELFOSABI_TRU64:
			return ("UNIX TRU64");
		case ELFOSABI_ARM:
			return ("ARM");
		case ELFOSABI_STANDALONE:
			return ("Stand-alone");
	}

	return ("<unknown: 53>");
}
