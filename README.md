# IGCMacros

[![CI Status](http://img.shields.io/travis/gia-vt/IGCMacros.svg?style=flat)](https://travis-ci.org/gia-vt/IGCMacros)
[![Version](https://img.shields.io/cocoapods/v/IGCMacros.svg?style=flat)](http://cocoapods.org/pods/IGCMacros)
[![License](https://img.shields.io/cocoapods/l/IGCMacros.svg?style=flat)](http://cocoapods.org/pods/IGCMacros)
[![Platform](https://img.shields.io/cocoapods/p/IGCMacros.svg?style=flat)](http://cocoapods.org/pods/IGCMacros)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

IGCMacros is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'IGCMacros'
```

## Usage

This works the same as all macros available in Objective-C. Once the library has been imported, all of the macros will now be available for usage.

```swift

#import <IGCMacros/IGCMacros.h>

- (void)sampleFunction {
    UIFont *font = FONT(@"HelveticaNeue", 20);
    UIAlertController *controller = ALERT(@"Test", @"Some Message");

    if (SYSTEM_VERSION_GREATERTHAN_OR_EQUALTO(@"10.0")) {
        DLog(@"is iOS 10");
    }

    [NOTIFICATION_CENTER postNotificationName:@"IGCTestNotification" object:nil];
}
```

## Contributing

1. Fork repository.
2. Create your feature branch: `git checkout -b feature/<feature-name>`.
3. Commit your changes: `git commit -am 'Add some feature'`.
4. Push to the branch: `git push origin feature/<feature-name>`.
5. Submit a pull request.

## Author

Jason Jon E. Carreos (jason@ingenuity.ph)

## License

IGCMacros is available under the MIT license. See the LICENSE file for more info.
