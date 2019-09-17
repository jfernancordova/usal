-- runhaskell two.hs

compareValues:: Int -> Int -> Int -> Bool
compareValues x y z = if x == y && y == z && x == z then True else False

main = do

    putStrLn "Enter first value:"
    inputOne <- getLine

    putStrLn "Enter second value:" 
    inputTwo <- getLine 

    putStrLn "Enter third value:" 
    inputThree <- getLine 

    let x = (read inputOne :: Int)
    let y = (read inputTwo :: Int)
    let z = (read inputThree :: Int)
    
    if (compareValues x y z) then  putStrLn "The values are the same" else putStrLn "The values are not the same"