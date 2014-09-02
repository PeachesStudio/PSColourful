Pod::Spec.new do |spec|
  spec.name          = "PSColourful"
  spec.version       = "0.0.1"
  spec.summary       = "A library to manipulate colors easily."
  spec.homepage      = "https://github.com/PeachesStudio/PSColourful/"
  spec.license       = 'MIT'
  spec.author        = { "liuqin.sheng" => "sliuqin@gmail.com" }
  spec.source        = { :git => "https://github.com/sliuqin/PSColourful.git", :tag => spec.version.to_s }
  spec.platform      = :ios, '7.0'
  spec.source_files  = 'Classes/*.{h,m}'
  spec.requires_arc  = true
end