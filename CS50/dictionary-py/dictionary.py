words = set()

def check(word):
    return word.lower() in words

def load(dictionary):
    with open(dictionary) as file:
        words.update(file.read().splitlines())
        return True

def size():
    return len(words)

def unload():
    return True

# The code defines a simple dictionary-like structure using a set to store words.
# It provides functions to check if a word is in the dictionary, load words from a file,
# get the size of the dictionary, and unload the dictionary.
# The `check` function checks if a word is present in the set, ignoring case.
# The `load` function reads words from a specified file and adds them to the set.
# The `size` function returns the number of words in the dictionary.
# The `unload` function is a placeholder that currently does nothing but returns True.
# This code is useful for creating a simple spell checker or word list manager.
# The use of a set allows for efficient membership testing, making the `check` function fast.
