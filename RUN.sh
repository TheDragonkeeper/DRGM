#!/bin/bash
clear
echo "Dragonkeepers Retro Games Machine"
cat /media/Games/motd
echo " "
echo " "
PS3='Please enter your choice: '
options=("Start Retro Game Machine" "Use As Laptop Only")
select opt in "${options[@]}"
do
    case $opt in
        "Start Retro Game Machine") 
	clear
            cat /media/Games/motd
	    echo " "
	    echo " "
	    echo "Select: Games Platform"
				PS3='Please enter your choice: '
				options=("Sega" "Snes" "Nes" "N64" "Nintendo-ds" "Gameboy")
				select opt in "${options[@]}"
				do
					case $opt in
        					"Sega")
						clear
							cat /media/Games/motd
							echo " "
							cd /media/Games/Games/sega-games
							select FILENAME in *;
							do
							case $FILENAME in
							*)
							echo "You picked $FILENAME ($REPLY)"
							exec mednafen "$FILENAME"
							;;
							esac
							done
				            	;;
        					"Snes")
						clear
							cat /media/Games/motd
            						echo " "
							cd /media/Games/Games/snes-games
							select FILENAME in *;
							do
							case $FILENAME in
							*)
							echo "You picked $FILENAME ($REPLY)"
							exec zsnes "$FILENAME"
							;;
							esac
							done
				            	;;
        					"Nes")
						clear
							cat /media/Games/motd
							echo ""
							cd /media/Games/Games/nes-games
							select FILENAME in *;
							do
							case $FILENAME in
							*)
							echo "You picked $FILENAME ($REPLY)"
							exec nes "$FILENAME"
							;;
							esac
							done
				            	;;
        					"N64")
						clear
							cat /media/Games/motd
							echo " "
							cd /media/Games/Games/n64-games
							select FILENAME in *;
							do
							case $FILENAME in
							*)
							echo "You picked $FILENAME ($REPLY)"
							exec mupen64plus "$FILENAME"
							;;
							esac
							done
				            	;;
        					"Nintendo-ds")
						clear
							cat /media/Games/motd
            						echo " "
							select FILENAME in *;
							do
							case $FILENAME in
							*)
							echo "You picked $FILENAME ($REPLY)"
							exec desmume "$FILENAME"
							;;
							esac
							done
					            	;;
        					"Gameboy")
						clear
							cat /media/Games/motd
							echo " "
            						echo "Please choose Gameboy Version"
							PS3='Please enter your choice: '
							options=("Colour" "Advanced" "Original" )
							select opt in "${options[@]}"
							do
								case $opt in
									"Colour")
										clear
										cat /media/Games/motd
										echo "  "
										cd /media/Games/Games/gameboy/colour
										select FILENAME in *;
										do
										case $FILENAME in
										*)
										echo "You picked $FILENAME ($REPLY)"
										exec mednafen "$FILENAME"
										;;
										esac
										done
									;;
									"Advanced")
										clear
										cat /media/Games/motd
										echo "  "
										cd /media/Games/Games/gameboy/adv
										select FILENAME in *;
										do
										case $FILENAME in
										*)
										echo "You picked $FILENAME ($REPLY)"
										exec mednafen "$FILENAME"
										;;
										esac
										done
									;;
									"Original")
										clear
										cat /media/Games/motd
										echo "  "
										cd /media/Games/Games/gameboy/orig
										select FILENAME in *;
										do
										case $FILENAME in
										*)
										echo "You picked $FILENAME ($REPLY)"
										exec mednafen "$FILENAME"
										;;
										esac
										done

									;;
									*) echo invalid option;;
								esac
							done

				            	;;
        					*) echo invalid option;;
    					esac
				done
            ;;
        "Use As Laptop Only")
            break
            ;;
        *) echo invalid option;;
    esac
done
clear
cat /media/Games/motn
read -p ""
exit

