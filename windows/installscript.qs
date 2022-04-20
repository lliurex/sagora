function Component()
{
    // constructor
    component.loaded.connect(this, Component.prototype.loaded);
}

Component.prototype.isDefault = function()
{
    // select the component by default
    return true;
}

Component.prototype.createOperations = function()
{
    try {
        // call the base create operations function
        component.createOperations();

        if (systemInfo.productType === "windows") {
            // create start menu entry
            component.addOperation("CreateShortcut", "@TargetDir@/Sagora.bat", "@StartMenuDir@/Sagora.lnk",
                    "workingDirectory=@TargetDir@", "iconPath=@TargetDir@/Sagora.exe",
                    "iconId=0");

            // create desktop shortcut
            component.addOperation("CreateShortcut", "@TargetDir@/Sagora.bat", "@DesktopDir@/Sagora.lnk",
                    "workingDirectory=@TargetDir@", "iconPath=@TargetDir@/Sagora.exe",
                    "iconId=0");

        }
    } catch (e) {
        console.log(e);
    }
}

Component.prototype.loaded = function ()
{
}
