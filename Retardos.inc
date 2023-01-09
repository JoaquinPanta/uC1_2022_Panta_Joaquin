PSECT udata_acs
; Autor: Joaquin Panta Vilela
; Fecha: 08/01/2023
; IDE: MPLAB X IDE
; Version del IDE: 6.0
; Frecuencia de oscilador: 4Mhz   
        
contador1: DS 1	    ;reserva 1 byte en access ram 
contador2: DS 1
    
PSECT code    
; T = (5 + 5k)us	    1Tcy = 1us 
CICLO1:
    MOVLW   1		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO2:
    MOVLW   4		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO3:
    MOVLW   9		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO4:
    MOVLW   19		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO5:
    MOVLW   39		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO6:
    MOVLW   49		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO7:
    MOVLW   99		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO8:
    MOVLW   199		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO9:
    MOVLW   999		    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO10:
    MOVLW   1999	    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO11:
    MOVLW   4999	    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO12:
    MOVLW   9999	    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO13:
    MOVLW   19999	    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO14:
    MOVLW   39999	    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
CICLO15:
    MOVLW   49999	    ; 1Tcy -- k
    MOVWF   contador1,0	    ; 1Tcy
    RETURN
    
    



