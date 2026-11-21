bin/%: %.c	
	@ mkdir -p bin	
	gcc -g $< -o $@

.PHONY: clear
clean:
	rm -r bin