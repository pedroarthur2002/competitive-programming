SELECT
    c.name
FROM
    customers AS C
INNER JOIN legal_person as lp
    ON c.id = lp.id_customers