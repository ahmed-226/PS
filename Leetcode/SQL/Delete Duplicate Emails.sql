DELETE FROM Person p1
USING Person p2
WHERE p1.email = p2.email AND p2.id < p1.id;