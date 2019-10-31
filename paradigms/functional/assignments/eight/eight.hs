--runhaskell eight.hs

potGuard :: Int->Int->Int
potGuard base exp 
  | exp==0  = 1   
  | otherwise =  base * potGuard base (exp-1)

potCond :: Int -> Int -> Int
potCond base exp = if exp==0 then 1 else base * potCond base (exp-1)

potCondImparList :: [Int] -> [Int]
potCondImparList [] = []
potCondImparList (x:xs) = if (mod x 2 /= 0) then potCond 2 x : potCondImparList xs else potCondImparList xs


potComp :: [Integer]
potComp = [2^n | n <- [10..50], mod n 2 /= 0]

main = do
  print $ potComp
  print $ potCondImparList [10..50] 

