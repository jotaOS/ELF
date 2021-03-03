export PROJNAME := ELF
export RESULT := ELF.elf

all: ELF.usu

ELF.usu: $(RESULT)
	@echo "[ELF] Creating USU..."
	@./elf2usu.py $<

clean:
	rm -rf obj ELF.elf ELF.usu

%: force
	@$(MAKE) -f ../helper/Makefile $@ --no-print-directory
force: ;
