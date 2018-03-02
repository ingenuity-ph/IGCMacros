#
# Be sure to run `pod lib lint IGCMacros.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IGCMacros'
  s.version          = '0.1.0'
  s.summary          = 'A collection of handy macros for development use.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
A collection of handy macros for development use. It encompasses some of the more commonly used code snippets and object initializations for Objective-C development.
                       DESC

  s.homepage         = 'https://github.com/ingenuity-ph/IGCMacros'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Jason Jon E. Carreos' => 'jason@ingenuity.ph' }
  s.source           = { :git => 'https://github.com/ingenuity-ph/IGCMacros.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'IGCMacros/Classes/**/*'

  # s.resource_bundles = {
  #   'IGCMacros' => ['IGCMacros/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
