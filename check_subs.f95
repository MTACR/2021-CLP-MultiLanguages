function substring(string, slen, sub) result (oc_count)
	integer, intent(in) :: slen
	integer (kind=1), intent(in) :: string(slen), sub(21)
	integer :: oc_count
	integer :: i = 1, j = 1
	
	integer :: x
	
	oc_count = 0
	do i = 1, slen
		if (sub(j) == string(i)) then
			j = j + 1
			if (sub(j) == 0) then
				j = 1
				oc_count = oc_count + 1
			end if
		else 
			j = 1
		end if
	end do
end function substring

