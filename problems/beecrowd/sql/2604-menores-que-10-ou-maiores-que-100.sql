SELECT
    p.id,
    p.name
FROM
    products AS p
WHERE
    p.price < 10
    OR p.price > 100