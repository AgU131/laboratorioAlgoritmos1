import System.Console.Haskeline (fallbackCompletion)
{-
Definir el tipo Deportista que consta de dos constructores Velocista y Ciclista con los siguientes parámetros: 
El constructor Velocista debe tomar como parámetro un número entero que represente la altura de la persona en centímetros.
El constructor Ciclista debe tomar como parámetro un valor de tipo Modalidad, que puede ser Carretera o Pista.

-}

type Altura = Int
data Modalidad = Carretera | Pista
    deriving Show
data Deportista = Velocista Altura | Ciclista Modalidad
    deriving Show
--b) A partir del tipo definido en el punto anterior, definí el valor juan que representa a un deportista velocista con una altura de 172 cm.
juan :: Deportista
juan = Velocista 172

--c)
esVelocistaAlto :: Deportista -> Int -> Bool
esVelocistaAlto (Velocista altura) n = altura > n
esVelocistaAlto _ n = False

--d)
contarVelocistas :: [Deportista] -> Int
contarVelocistas [] = 0
contarVelocistas ((Velocista _):xs) = 1 + contarVelocistas xs
contarVelocistas (_:xs) = contarVelocistas xs


--e)
esCiclista :: Deportista -> Bool
esCiclista (Ciclista _) = True
esCiclista _ = False

--Ejercicio 2

data Cola = VaciaC | Encolada Deportista Cola 
    deriving Show

--a)

encolar :: Deportista -> Cola -> Cola
encolar dep VaciaC = Encolada dep VaciaC
encolar dep (Encolada deportista cola) = Encolada deportista (encolar dep cola)





