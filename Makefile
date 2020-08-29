.PHONY: clean All

All:
	@echo "----------Building project:[ Overloading-Operators - Debug ]----------"
	@cd "Overloading-Operators" && "$(MAKE)" -f  "Overloading-Operators.mk"
clean:
	@echo "----------Cleaning project:[ Overloading-Operators - Debug ]----------"
	@cd "Overloading-Operators" && "$(MAKE)" -f  "Overloading-Operators.mk" clean
