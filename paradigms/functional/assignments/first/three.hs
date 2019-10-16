-- runhaskell three.hs

compareValues:: Int -> Int -> Int -> Bool
compareValues x y z = if x == y && y == z && x == z then True else False

addExtraValue:: Bool -> Int -> Int -> Bool
addExtraValue compareValuesAreEquals newValue anyCompareValue = if compareValuesAreEquals && newValue == anyCompareValue then True else False

main = do

    putStrLn "Enter first value:"
    inputOne <- getLine

    putStrLn "Enter second value:" 
    inputTwo <- getLine 

    putStrLn "Enter third value:" 
    inputThree <- getLine 

    putStrLn "Enter fourth value:" 
    inputFour <- getLine    

    let x = (read inputOne :: Int)
    let y = (read inputTwo :: Int)
    let z = (read inputThree :: Int)
    let a = (read inputFour ::  Int)
    let cv = (compareValues x y z)
    
    if (addExtraValue cv a x) then  putStrLn "The values are the same" else putStrLn "The values are not the same"