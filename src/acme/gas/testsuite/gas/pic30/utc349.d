#as: -W
#objdump: -s -j foo
#name: .org in .section foo, "x" - fill Not Specified

# Test to ensure that the .org directive works properly in a
# .section foo, "x" section.

.*: .*

Contents of section foo:
 0000 000000 000000 000000 120000  ............
