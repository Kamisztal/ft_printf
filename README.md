*This activity has been created as part of the 42 curriculum by pmisztal.*

# ft_printf

## Description

My own remake of `printf` in c. My printf have to be compared to the real printf

conversions: `%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`. Like the real `printf`, it returns the number of octet written.

## Instructions

```bash
make
cc main.c -I includes libftprintf.a
```

## Algorithm

`ft_printf` reads the format string character by character. Normal characters are printed directly. When it finds a `%`, it detects the conversion letter and calls a small function adapted for that type, which reads the argument, prints it and returns how many octet it wrote. All these counts are added together and returned.

## Resources

- `man 3 printf`, `man 3 stdarg`
- Youtube (variadiques, printf)
- Koor
- Pear to Pear :>
- AI was used to explain me new notions like variadiques or help me to have a better understand of for example hexadecimal base.
