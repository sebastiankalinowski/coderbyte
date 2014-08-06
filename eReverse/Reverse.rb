def reverse_string(string) # Method reverse_string with parameter 'string'.
    loop = string.length
    word = ''
    while loop > 0
        loop -= 1
        word += string[loop]
    end
    return word
end
puts reverse_string("Hello Ruby!")