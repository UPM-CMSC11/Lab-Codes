#!/usr/bin/env python3

# String with single quotes - preferred style of Python developers
print('Hello World')

# String with double quotes
print("Hello World")

# Comma-separated strings
print('Welcome', 'to', 'the', 'world')

# Strings with escape characters
print('Welcome\nto\nthe\nworld')

# Long string covering many lines
print('The quick brown fox jumps over \
the lazy dog!!!')

# Triple-quoted strings
# Use in the following situations:
#   1.  multiline strings
#   2.  strings containing single or double quotes
#   3.  docstrings
print('Display "hi" in quotes')
print('Display \'hi\' in quotes')
print("Display 'hi' in quotes")
print("Display \"hi\" in quotes")
print("""Display 'hi' and "bye" in quotes""")
print('''Display 'hi' and "bye" in quotes''')

# Multiline string
tripleQuotedString = """The quick brown fox jumps 
over the lazy dog!"""
print(tripleQuotedString)
