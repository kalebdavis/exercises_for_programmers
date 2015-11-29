def number?(password)
  !password.match(/[1-9]/).nil?
end

def letters?(password)
  !password.match(/[a-zA-Z]/).nil?
end

def longer_than_8_characters?(password)
  password.length > 8
end

def special_characters?(password)
  !password.match(/[^A-Za-z0-9]/).nil?
end

def password_validator(password)
  case
  when number?(password) && letters?(password) && longer_than_8_characters?(password) && special_characters?(password)
    return 3
  when number?(password) && letters?(password) && longer_than_8_characters?(password)
    return 2
  when letters?(password) && !number?(password)
    return 1
  else
    return 0
  end
end

QUALIFIERS = ['very weak', 'weak', 'strong', 'very strong']

while(true) do
  puts 'Enter a password'
  password = gets.chomp
  qualifier = password_validator(password)
  puts "The password #{password} is a #{QUALIFIERS[qualifier]} password."
end
