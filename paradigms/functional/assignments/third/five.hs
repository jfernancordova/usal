--runhaskell five.hs

main = do 
  print $ [ x * 2 | x <- [10..20]]