require 'faraday'
require 'json'

app_id = '192edcd4229e47cc83bc955ea0eb3d38'
base_url = 'https://openexchangerates.org/api/'

conn = Faraday.new(url: base_url)
response = conn.get 'latest.json', { app_id: app_id }
resp = JSON.parse(response.body)
puts 'How many bills are you exchanging?'
money = gets.chomp.to_f
puts 'What country code would you like to exchange from?'
country_code = gets.chomp
rate = resp['rates'][country_code.upcase].to_f
puts "#{money} bills at an exchange rate of #{rate} is #{rate * money} US dollars"
