--runhaskell four.hs

mult::[Int] -> [Int]
mult [] = []
mult (x:xs) 
  | mod x 2==0 = x * 2 : mult xs
  | otherwise = mult xs

main = do 
    print $ mult[1,2, 8, 7]