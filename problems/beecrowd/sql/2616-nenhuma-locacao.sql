SELECT
    c.id,
    c.name
FROM
    customers AS c
LEFT JOIN locations AS l
    ON c.id = l.id_customers
WHERE
    l.id IS NULL
ORDER BY
    c.id