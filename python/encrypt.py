import string
LETTERS = string.ascii_lowercase

def encrypt(initial, shift):
  """ Use : encrypt("message", 98)
  => 'gymmuay'
  
  Encrypts text using Caesar Cipher
  """
  initial = initial.lower()
  output = ""

  for char in initial:
    if char in LETTERS:
      output += LETTERS[(LETTERS.index(char) + shift) % len(LETTERS)]

  return output

encrypt("intial,12")
