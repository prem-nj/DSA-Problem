# Write your MySQL query statement below

SELECT a.id 
FROM Weather a
INNER JOIN Weather b
WHERE a.temperature>b.temperature AND DATEDIFF(a.recordDate,b.recordDate)=1