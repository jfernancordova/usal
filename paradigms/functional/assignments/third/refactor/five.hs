--runhaskell five.hs

mult2::[Int] -> [Int]
mult2 [] = []
mult2 (x:xs) = x * 2 : mult2 xs

main = do 
  print $ mult2 [10,1000]