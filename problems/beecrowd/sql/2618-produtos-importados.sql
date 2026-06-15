SELECT
    p.name,
    pv.name,
    c.name
FROM products AS p
INNER JOIN providers AS pv
    ON p.id_providers = pv.id
INNER JOIN categories AS c
    ON p.id_categories = c.id
WHERE
    pv.name = 'Sansul SA' AND c.name = 'Imported'