pot::Int -> Int -> Int
-- cut Conditions, remember recursivity
pot _ 0 = 1
pot base exp = base * pot base (exp - 1)

main = do 
  print $ pot 1 2