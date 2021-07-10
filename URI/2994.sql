WITH v AS (SELECT attendances.id_doctor as id, 
		   SUM(  CAST( (CAST( (attendances.hours * 150) * (100+work_shifts.bonus) AS real )/100.00) AS decimal(10,1) ) ) as salary
		   FROM attendances, work_shifts
		  	WHERE attendances.id_work_shift=work_shifts.id
		   GROUP BY 1
		  	)
SELECT doctors.name, v.salary FROM doctors,v
WHERE doctors.id=v.id ORDER BY v.salary DESC;