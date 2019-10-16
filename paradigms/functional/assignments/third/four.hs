--runhaskell four.hs

pares::[Int] -> [Int]
pares [] = []
pares (x:xs) 
  | mod x 2==0 = x : pares xs
  | otherwise = pares xs

mult :: [Int] -> Int
mult [] = 1
mult (x:xs) = x * mult xs

main = do 

  let p = (pares [2,4,6,8,10,1,5,3])

  print $ mult p
