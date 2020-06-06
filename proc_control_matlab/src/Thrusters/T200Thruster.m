classdef T200Thruster < Thruster
    % T200THRUSTER class
%==========================================================================
%Proprietes
%==========================================================================
    properties
        newtons;
        amps;
        watts;
        pwms;
        rpms;
        efficiencies;
    end
%==========================================================================
%Methodes
%==========================================================================    
    methods
        function this = T200Thruster(T,id)
            % Constructor
            this.newtons = T{:,6};
            this.amps = T{:,3};
            this.watts = T{:,7};
            this.pwms = T{:,1};
            this.rpms = T{:,2};
            this.efficiencies = T{:,8};
            this.id=id;
        end
    end
%==========================================================================
%Methodes publiques
%==========================================================================
    methods(Access=public)      
        function pwm = forceToPwm(this, force)
            pwm = round(interp1(this.newtons, this.pwms, force, "linear"));
        end
                
        function current = forceToCurrent(this, force)
            current = interp1(this.newtons, this.amps, force, "nearest");
        end
                
        function eff = forceToEfficiency(this, force)
            eff = interp1(this.newtons, this.efficiencies, force, "nearest");
        end
        
        function rpm = forceToRPM(this, force)
            rpm = interp1(this.newtons, this.rpms, force, "nearest");
        end
             
        function power = forceToPower(this, force)
            power = interp1(this.newtons, this.watts, force, "nearest");
        end
    end
end

