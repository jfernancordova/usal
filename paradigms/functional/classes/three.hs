mult::[Int] -> Int
mult [] = 1
mult (x:xs) = x * mult xs

main = do 
  print $ mult [1,3,4,6]