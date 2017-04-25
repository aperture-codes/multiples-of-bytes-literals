# Multiples of bytes literals

User defined literals for handling multiples of bytes postfixes.

## Supported multiples

|  Bytes | Postfix  |   Name |
|---|---|---|
| 1  | _B  | byte |
| 1024^1  | _KiB  | kibibyte  |
| 1024^2  | _MiB  | mebibyte  |
| 1024^3 | _GiB  | gibibyte  |
| 1024^4  | _TiB  |  tebibyte |

## Usage

```cpp
    using namespace multiples_of_bytes_literals;

    std::size_t buffer_size = 24_MiB;
```
