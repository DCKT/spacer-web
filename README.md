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

```json
{
  "bs-dependencies": ["@dck/spacer-web"]
}
```

Use it in your app code :

```reason
[@react.component]
let make = () => {  
  <div>
    <h1>{"Hello" |> React.string}</h1>
    <Spacer height=10 />
    <p>{"World" |> React.string}</p>
  </div>
};
```
