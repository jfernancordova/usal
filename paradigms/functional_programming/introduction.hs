-- Plus 
plus a b = a + b

-- Plus Decimal
plusDEC::Double->Double->Double
plusDEC a b = a + b

-- Find the min between two numbers
min::Int->Int->Int
min a b = if a < b then a else b

-- Find the major between two numbers
major::Int->Int->Int
major a b = if a > b then a else b

-- Conditional
equals::Int->Int->Bool
equals a b = if a == b then True else False

major100::(Int, Int, Int)->Int
major100 (a,b,c) = if a > 100 then b else c

greaterThan::(Int, Int, Int)->Int->Int
greaterThan (a,b,c) n = if a > n then b else c 

prod::(Int, Int, Int)->Int->(Int,Int,Int)
prod (a,b,c)n = (a * n, b * n, c * n)

