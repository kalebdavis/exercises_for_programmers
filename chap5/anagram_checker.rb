def anagram?(word1, word2)
  word1.split('').sort == word2.split('').sort
end

while(true) do
  puts "Enter two strings and I'll tell you if they are anagrams:"
  puts "Enter the first string"
  word1 = gets.chomp
  puts "Enter the second string"
  word2 = gets.chomp
  if anagram?(word1, word2)
    puts "\"#{word1}\" and \"#{word2}\" are anagrams."
  else
    puts "\"#{word1}\" and \"#{word2}\" are not anagrams."
  end
end
