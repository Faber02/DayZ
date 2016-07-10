class Attachment_FL_Pist : CA_Magazine
{
	scope = public;
	count = 1;
	type = WeaponSlotItem;
	
	model = "\z\addons\dayz_communityweapons\attachments\flashlight_pistol\flashlight_pistol.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\flashlight_pistol\data\m_flashlight_pistol_ca.paa";
	
	displayName = $STR_DZ_ATT_FL_PST_NAME;
	descriptionShort = $STR_DZ_ATT_FL_PST_DESC;
	
	class ItemActions
	{
		class AttachToSecondary
		{
			text = $STR_DZ_ATT_ACT_TO_SECONDARY;
			action = "[_this select 0, 0] call dz_fn_attachment_attach";
			condition = "[_this select 0, 0] call dz_fn_attachment_canAttach";
			closeDisplay = true;
		};
	};
};