# Spacer

An utility component for pushing other elements and avoid `padding`, `margin` everywhere.

## Usage

Install :

```console
$ yarn add @dck/spacer-web
```

### Web

```js
import Spacer from "@dck/spacer-web"

const App = () => {
  return (
    <div>
      <h1>Hello</h1>
      <Spacer height={10} />
      <p>world</p>
    </div>
  )
}
```

### ReasonML

Add the module to your `bsconfig.json` file :

```
"bs-dependencies": [
  ...,
  "@dck/spacer-native"
]
```

Use it in your app code :

```reason
[@react.component]
let make = () => {  
  <>
    <Text>{"Hello" |> React.string}</Text>
    <Spacer height=10 />
    <Text>{"World" |> React.string}</Text>
  </>
};
```
