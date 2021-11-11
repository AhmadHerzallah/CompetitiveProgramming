import string
def decode(message):
  decoded_message = [i if i == " " else string.ascii_lowercase[25 - string.ascii_lowercase.index(i)] for i in message]
  return "".join(decoded_message)
  
print(decode("r slkv mlylwb wvxlwvh gsrh nvhhztv"))

  # for i in message:
    # decoded_message += " " if i == " " else letters[25 - letters.index(i)]
