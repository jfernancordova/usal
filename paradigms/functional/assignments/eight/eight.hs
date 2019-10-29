--runhaskell eight.hs

pot::Int -> Int -> Int
-- cut Conditions, remember recursivity
pot _ 0 = 1
pot base exp = base * pot base (exp - 1)

potency :: Int -> [Int]
potency n = takeWhile (<n) (map (2^) [0..])

main = do 
  print $ pot 1 2
  print $ potency 5
