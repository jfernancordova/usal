plus a b = a + b

plusDec::Double->Double->Double
plusDec a b = a + b

min::Int->Int->Int
min a b = if a > b then b else a

max::Int->Int->Int
max a b = if a > b then a else b

equals::Int->Int->Bool
equals a b = if a == b then True else False

greatherThan100::(Int, Int, Int)->Int
greatherThan100 (a, b, c) = if a > 100 then b else c

greatherThan::(Int, Int, Int)->Int
greatherThan (a, b, c) n = if a > n then b else c

prod::(Int, Int, Int)->Int->(Int, Int, Int)
prod (a, b, c) n = (a * n, b * n, c * n)

service::(String, Double, String)->Double->(String, Double, Double)
service (patent, kms, brand) kmsservice = if kms >= kmsservice then (patent, brand, kmsservice) else ("Don't need a service", 0,0)


