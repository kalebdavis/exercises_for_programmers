require 'pry'

def calculate_months(b, apr, p)
  binding.pry
  i = apr / 365
  (-1/30) * (Math.log(1 + ((b/p)*(1-(1+i)**30))))/(Math.log(1+i))
end

while(true) do
  puts "What is your balance?"
  b = gets.chomp.to_f
  puts "What is the APR on the card (as a percent)?"
  apr = gets.chomp.to_f
  puts "What is the monthly payment you can make?"
  p = gets.chomp.to_f
  puts "It will take you #{calculate_months(b, apr, p)} months to pay off this card"
end
