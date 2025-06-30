if(Get-Item assets_speedacademy_randomizer.pk3)
{
    Remove-Item assets_speedacademy_randomizer.pk3
}

$compress = @{
  Path = "ui", "models"
  CompressionLevel = "Fastest"
  DestinationPath = "assets_speedacademy_randomizer.zip"
}
Compress-Archive @compress

Move-Item assets_speedacademy_randomizer.zip assets_speedacademy_randomizer.pk3

# Note : this file has to be loaded after speed_academy, that's why it is currently renamed.