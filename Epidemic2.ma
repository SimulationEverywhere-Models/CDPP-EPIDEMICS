#include(rules2.inc)

[top]
components : epidemic

[epidemic]
type : cell
dim : (10, 10)
delay : transport
defaultDelayTime  : 10
border : nowrapped 
neighbors : epidemic(-1,-1)	epidemic(-1,0)	epidemic(-1,1)
neighbors : epidemic(0,-1)	epidemic(0,0)	epidemic(0,1)
neighbors : epidemic(1,-1)	epidemic(1,0)	epidemic(1,1)
initialvalue : 900
initialCellsValue : Epidemic.val
localtransition : epidemic-rule

[epidemic-rule]
rule : { if(#macro(newS)<0, 0,#macro(newS))*100 + #macro(newI)*10 + (9 - (if(#macro(newS)<0, 0,#macro(newS)) + #macro(newI))) } 10 { #macro(recovered) != 9 }
rule : 9 10 { t }