# Write your MySQL query statement below
update salary
set sex = case when sex = 'f' then 'm' 
else 'f' end
