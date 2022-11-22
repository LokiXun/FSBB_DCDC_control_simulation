classdef Charge_Mode_Enum < Simulink.IntEnumType
  enumeration
    Init_Mode(0)
    CC_Mode(1)
    CV_Mode(2)
  end
  methods (Static)
    function retVal = getDefaultValue()
      retVal = Charge_Mode_Enum.Init_Mode;
    end
  end
end 