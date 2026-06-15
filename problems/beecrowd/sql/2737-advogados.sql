SELECT l.name, MAX(l.customers_number) AS customers_number FROM lawyers AS l
UNION ALL
SELECT l.name, MIN(l.customers_number) AS customers_number FROM lawyers AS l
UNION ALL
SELECT l.name, AVG(l.customers_number) AS customers_number FROM lawyers AS l 