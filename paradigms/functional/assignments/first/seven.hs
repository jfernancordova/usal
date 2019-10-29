-- runhaskell seven.hs

potency :: Int -> [Int]
potency n = takeWhile (<n) (map (2^) [0..])

main = do 
    print $ potency 5