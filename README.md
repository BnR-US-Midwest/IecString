# IecString

[![Made for B&R](https://raw.githubusercontent.com/hilch/BandR-badges/dfd5e264d7d2dd369fd37449605673f779db437d/Made-For-BrAutomation.svg)](https://www.br-automation.com)
[![GitHub License](https://img.shields.io/github/license/BnR-US-Midwest/IecString)](https://github.com/BnR-US-Midwest/IecString?tab=MIT-1-ov-file#MIT-1-ov-file)
[![GitHub Downloads (all assets, all releases)](https://img.shields.io/github/downloads/BnR-US-Midwest/IecString/total)](https://github.com/BnR-US-Midwest/IecString/releases/latest/download/IecString.zip)
[![GitHub issues](https://img.shields.io/github/issues-raw/BnR-US-Midwest/IecString)](https://github.com/BnR-US-Midwest/IecString/issues)

IecString is an [Automation Studio](https://www.br-automation.com/en-us/products/software/automation-software/automation-studio/) library of string functions.  
The functions **enhance** string manipulation, **protect** memory, and support [ANSI C/C++](https://en.wikipedia.org/wiki/ANSI_C) and [IEC 61131-3](https://en.wikipedia.org/wiki/IEC_61131-3).

**NOTE**: This is not an official library and is supported through the community.  IecString is provided as-is under the [MIT License](https://mit-license.org/) agreement.  Source code, documentation, and issues are managed through [GitHub](https://github.com/BnR-US-Midwest/IecString).

# Features

* :lock: Protect against
    * buffer overflow
    * overlapping strings
    * accessing null pointers
* :rocket: Lightweight performance
* :no_entry_sign: Input strings are immutable
* :white_check_mark: Compatible with ANSI C/C++ and IEC 61131-3
* :bulb: Inspiration from [C standard library](https://cplusplus.com/reference/clibrary/), [Python string methods](https://docs.python.org/3/library/stdtypes.html#string-methods), [JavaScript string methods](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String#instance_methods)


Function | Read | Write | Description
---|---|---|---
[IecStringCopy](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L2) | :mag: | :memo: | Copy source to destination up to size of destination or source length
[IecStringConcat](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L10) | :mag: | :memo: | Concatenate source to destination up to size of destination or source length
[IecStringCompare](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L18) | :mag: | | Compare characters of two strings
[IecStringLength](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L26) | :mag: | | Determine the length of a string
[IecStringFirst](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L32) | :mag: |  | First occurrence of character in source
[IecStringLast](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L39) | :mag: |  | Last occurrence of character in source
[IecStringFind](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L46) | :mag: |  | Find substring in source
[IecStringFirstIn](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L53) | :mag: |  | First occurrence in source of any character from find
[IecStringLengthIn](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L60) | :mag: |  | Initial length in source containing only characters from find
[IecStringStartsWith](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L67) | :mag: | | Does source start with prefix
[IecStringEndsWith](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L74) | :mag: | | Does source end with suffix
[IecStringReplace](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L81) | :mag: | :memo: | Find in source and replace in destination
[IecStringSplit](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L91) | :mag: | :memo: | Split source into tokens
[IecStringFormat](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L103) | :mag: | :memo: | Format string with runtime data
[IecStringDecimal](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L112) | | :memo: | Convert integer to string as decimal
[IecStringFloat](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L122) | | :memo: | Convert float to string
[IecStringDateTime](https://github.com/BnR-US-Midwest/IecString/blob/main/IecString.fun#L133) | :mag: | :memo: | Format date and/or time

:mag: The functions marked in the read column are **reading** from memory.  
:memo: The functions marked in the write column are **writing** to memory *within the size* of `destination`.

# Install

- [Download](https://github.com/BnR-US-Midwest/IecString/releases/latest/download/IecString.zip) the binaries and extract the archive
- Add to the project as **existing library** from the toolbox in logical view

# Build

- Clone or download source files
- Add to the project as **existing library**
    - Option to add as **reference**

Alternatively, add as submodule to an existing project repository.

```
cd <repository>
git submodule add https://github.com/BnR-US-Midwest/IecString.git <project>/Logical/Libraries/IecString
```

Then add to project as **existing library**.

# Performance & Unit Tests

See the [IecStringProject](https://github.com/BnR-US-Midwest/IecStringProject) for all function unit tests and hardware performance tests.

# Documentation

Once installed, the help file can be view using the `F1` function key.

See the [IecStringHelp](https://github.com/BnR-US-Midwest/IecStringHelp).  This help is included in the binary download of this library.

### Dependencies

- [AsTime](https://help.br-automation.com/#/en/4/libraries%2Fastime%2Fastime.html)

### Authors

- Tyler Matijevich ([@tmatijevich](https://github.com/tmatijevich))

### Related Projects

- [intel/safestringlib](https://github.com/intel/safestringlib)
- [B&R/BrbLibs](https://github.com/br-automation-com/BrbLibs-lib-src)
- [Loupe/StringExt](https://github.com/loupeteam/StringExt)
